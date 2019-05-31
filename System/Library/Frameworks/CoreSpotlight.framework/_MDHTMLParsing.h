/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface _MDHTMLParsing : NSObject {

	unsigned short* uniChars;
	unsigned long long uniCharLen;
	unsigned long long uniCharSize;
	unsigned char newLineBuffer[8];
	unsigned long long newLineLength;
	NSMutableDictionary* attributes;
	NSString* metaName;
	NSString* metaHttpEquiv;
	NSString* metaContent;
	unsigned long long sourceEncoding;
	unsigned sourceCFEncoding;
	unsigned long long indexingLimit;
	const char* titleStart;
	unsigned titleLength;
	BOOL inHead;
	BOOL inTitle;
	BOOL inScript;
	BOOL inStyle;

}
+(void)initialize;
-(void)appendUnichars:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(void)appendText:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)appendNewline;
-(id)initWithEncoding:(unsigned long long)arg1 ;
-(void)dealloc;
@end

