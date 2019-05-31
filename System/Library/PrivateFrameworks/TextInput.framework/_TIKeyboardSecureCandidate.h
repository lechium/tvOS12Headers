/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _TIKeyboardSecureCandidate : NSObject <NSCopying> {

	NSString* _secureHeader;
	NSString* _secureContent;
	NSString* _secureFormattedContent;
	NSString* _input;
	NSString* _truncationSentinel;

}

@property (nonatomic,readonly) NSString * secureHeader;                        //@synthesize secureHeader=_secureHeader - In the implementation block
@property (nonatomic,readonly) NSString * secureContent;                       //@synthesize secureContent=_secureContent - In the implementation block
@property (nonatomic,readonly) NSString * secureFormattedContent;              //@synthesize secureFormattedContent=_secureFormattedContent - In the implementation block
@property (nonatomic,readonly) NSString * input;                               //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSString * truncationSentinel;                  //@synthesize truncationSentinel=_truncationSentinel - In the implementation block
-(NSString *)secureContent;
-(NSString *)secureHeader;
-(NSString *)truncationSentinel;
-(NSString *)secureFormattedContent;
-(id)initWithSecureHeader:(id)arg1 secureContent:(id)arg2 secureFormattedContent:(id)arg3 input:(id)arg4 truncationSentinel:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)input;
@end

