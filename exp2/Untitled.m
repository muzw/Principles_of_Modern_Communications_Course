% 将十进制数转换为二进制的01数组
dec_num = 123;  % 要转换的十进制数
bin_str = dec2bin(dec_num);  % 将十进制数转换为二进制字符串
bin_arr = str2num(bin_str(:)');  % 将字符串转换为数字数组
pp = num2str(bin_arr)
% 输出结果
disp(['十进制数：' num2str(dec_num)]);
disp(['二进制字符串：' bin_str]);
disp(['二进制数组：' num2str(bin_arr)]);
