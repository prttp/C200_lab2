#include "Bytes.h"
#include <stdio.h>

void Bin::Show() {
	printf("%d %d %d %d %d %d %d %d\n", m_bin7, m_bin6, m_bin5, m_bin4, m_bin3, m_bin2, m_bin1, m_bin0);
}
void Oct::Show() {
	printf("%o %o %o\n", m_oct2, m_oct1, m_oct0);
}
void Hex::Show() {
	printf("%x %x\n", m_hex1, m_hex0);
}
void Bin::ShowPos(int pos) {
	if ((pos < 0) || (pos > 7)) { printf("Error! Wrong input\n"); }
	else {
		switch (pos) {
		case 0: printf("%d\n", m_bin0); break;
		case 1: printf("%d\n", m_bin1); break;
		case 2: printf("%d\n", m_bin2); break;
		case 3: printf("%d\n", m_bin3); break;
		case 4: printf("%d\n", m_bin4); break;
		case 5: printf("%d\n", m_bin5); break;
		case 6: printf("%d\n", m_bin6); break;
		case 7: printf("%d\n", m_bin7); break;
		};
	};
}
void Oct::ShowPos(int pos) {
	if ((pos < 0) || (pos > 2)) { printf("Error! Wrong input\n"); }
	else {
		switch (pos) {
		case 0: printf("%o\n", m_oct0); break;
		case 1: printf("%o\n", m_oct1); break;
		case 2: printf("%o\n", m_oct2); break;
		};
	}
}
void Hex::ShowPos(int pos) {
	if ((pos < 0) || (pos > 1)) { printf("Error! Wrong input\n"); }
	else {
		switch (pos) {
		case 0:  printf("%x\n", m_hex0); break;
		case 1:  printf("%x\n", m_hex1); break;
	
		};
	}
}
void Bin::Edit(int pos, int val) {
	if ((pos < 0) || (pos > 7) || (val <0) || (val > 1) ) { printf("Error! Wrong input\n"); }
	else {
		switch (pos) {
		case 0: m_bin0 = val; break;
		case 1: m_bin1 = val; break;
		case 2: m_bin2 = val; break;
		case 3: m_bin3 = val; break;
		case 4: m_bin4 = val; break;
		case 5: m_bin5 = val; break;
		case 6: m_bin6 = val; break;
		case 7: m_bin7 = val; break;
		};
	};
}
void Oct::Edit(int pos, int val) {
	if ((pos < 0) || (pos > 2) || (val < 0) || (val > 7)) { printf("Error! Wrong input\n"); }
	else {
		switch (pos) {
		case 0: m_oct0 = val; break;
		case 1: m_oct1 = val; break;
		case 2: m_oct2 = val; break;
		
		};
	};
}
void Hex::Edit(int pos, int val) {
	if ((pos < 0) || (pos > 1) || (val < 0) || (val > 15)) { printf("Error! Wrong input\n"); }
	else {
		switch (pos) {
		case 0: m_hex0 = val; break;
		case 1: m_hex1 = val; break;
		
		};
	};
}
void Bytes::ShowDec() { printf("%d\n", m_dec); }
void Bytes::ShowChar() { printf("%c\n", m_dec); }