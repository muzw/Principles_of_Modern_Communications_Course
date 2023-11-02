clear all;
%------------------------------------定义卷积码编译码系统参数
trellis = poly2trellis(3,[7 5]);
%------------------------------------随机生成待编码序列，并进行卷积编码
L = 10000000;   %待编码序列长度
encode_in = randi([0,1], [1,L]);
encode_out = convenc(encode_in, trellis);

SNRs = [];
BERs_enc = [];
BERs_dir = [];

for snr = -5:0.05:20
    display(snr)
    SNRs = [SNRs snr];
    %------------------------------------不进行编码，直接传输
    code_dir = awgn(encode_in,snr);
    for k = 1:length(code_dir)
        if code_dir (k) >= 0.5
            code_dir(k) = 1;
        else
            code_dir(k) = 0;
        end
    end
  
    %------------------------------------将编码后的序列通过信道，并模拟信道噪声
    code_noise = awgn(encode_out,snr);
    for k = 1:length(code_noise)
        if code_noise (k) >= 0.5
            code_noise(k) = 1;
        else
            code_noise(k) = 0;
        end
    end
    %------------------------------------对信道噪声干扰后的序列进行维特比译码
    decode_out = vitdec(code_noise,trellis,20,'trunc', 'hard');

    %------------------------------------计算误码率
    %编码后的误码率
    decode_error = decode_out ~= encode_in;
    decode_error_rate = sum(decode_error)/length(decode_error);
    BERs_enc = [BERs_enc decode_error_rate];
    %不编码的误码率
    dir_error = code_dir ~= encode_in;
    dir_error_rate = sum(dir_error)/length(dir_error);
    BERs_dir = [BERs_dir dir_error_rate];
end

semilogy(SNRs, BERs_enc,SNRs, BERs_dir);

legend('卷积码','未编码');
title('误码率-信噪比曲线');
xlabel('信噪比(dB)');
ylabel('误码率');