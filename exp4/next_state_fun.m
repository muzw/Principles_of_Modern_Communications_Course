function [ next_state,memory_contents ] = next_state_fun( dec_state,t,K )
bin_state = dec2bin(dec_state,K-1);
memory_contents = strcat(dec2bin(t,1) ,bin_state); 
next_bin_state = memory_contents(1:end-1);
next_state = bin2dec(next_bin_state);
end

