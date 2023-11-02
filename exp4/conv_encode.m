function out =  conv_encode(in, G)
G1 = G(1,:);
G2 = G(2,:);
out1 = mod(conv(in,G1), 2);
out2 = mod(conv(in,G2), 2);

out = reshape(cat(1, out1, out2), 1, 2*length(out1)); %将out1和out2依次插入out
end
    
    