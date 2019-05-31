/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSString;

@interface PRTurkishSuffix : NSObject {

	NSString* _pattern;
	NSString* _name;
	unsigned char _patternBuffer[16];
	unsigned char _isOptional[16];
	unsigned long long _patternBufferLength;
	int _suffixType;
	BOOL _postponesApostrophe;

}
+(id)standardTurkishNounSuffixes;
+(id)standardTurkishVerbSuffixes;
+(id)standardTurkishSuffixes;
+(void)_enumerateSuffixMatchesForBuffer:(char*)arg1 length:(unsigned long long)arg2 followedByLetter:(unsigned char)arg3 options:(unsigned long long)arg4 depth:(unsigned long long)arg5 matchState:(int)arg6 suffixStack:(id*)arg7 suffixRangeStack:(NSRange*)arg8 usingBlock:(/*^block*/id)arg9 ;
+(void)enumerateSuffixMatchesForBuffer:(char*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
+(void)enumerateSuffixMatchesForWord:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)pattern;
-(void)_fillPatternBuffer;
-(int)suffixType;
-(BOOL)postponesApostrophe;
-(id)initWithPattern:(id)arg1 name:(id)arg2 type:(int)arg3 postponesApostrophe:(BOOL)arg4 ;
-(unsigned long long)matchingIndexInBuffer:(char*)arg1 length:(unsigned long long)arg2 followedByLetter:(unsigned char)arg3 matchWithNameOnly:(BOOL*)arg4 ;
-(void)dealloc;
-(id)name;
-(id)description;
@end

