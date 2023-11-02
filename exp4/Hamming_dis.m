function [ hamming_dis ] = Hamming_dis( code1, code2 )
code1 = num2str(code1,'%d');
code2 = num2str(code2,'%d');
hamming_dis = sum(code1 ~= code2);
end

