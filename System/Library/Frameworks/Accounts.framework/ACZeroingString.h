/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <Foundation/NSString.h>

@interface ACZeroingString : NSString {

	unsigned short* _characters;
	unsigned long long _length;

}

@property (readonly) unsigned short* characters;              //@synthesize characters=_characters - In the implementation block
@property (readonly) unsigned long long length; 
+(id)_emptyString;
+(BOOL)supportsSecureCoding;
-(id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(unsigned short*)characters;
-(id)replacementObjectForCoder:(id)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)_compatibleCopy;
-(unsigned long long)length;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)initWithUTF8String:(const char*)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
@end

