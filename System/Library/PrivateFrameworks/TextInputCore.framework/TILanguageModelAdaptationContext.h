/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface TILanguageModelAdaptationContext : NSObject <NSCopying> {

	BOOL _isOnline;
	NSString* _appContext;
	NSString* _recipientNameDigest;
	NSDictionary* _recipientContext;

}

@property (nonatomic,readonly) NSString * appContext;                            //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,readonly) NSString * recipientNameDigest;                   //@synthesize recipientNameDigest=_recipientNameDigest - In the implementation block
@property (nonatomic,readonly) NSDictionary * recipientContext;                  //@synthesize recipientContext=_recipientContext - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * identifierForResponseKit; 
@property (assign,nonatomic) BOOL isOnline;                                      //@synthesize isOnline=_isOnline - In the implementation block
-(id)initWithClientIdentifier:(id)arg1 andRecipientRecord:(id)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 andRecipientContactInfo:(id)arg2 ;
-(NSString *)identifierForResponseKit;
-(NSString *)recipientNameDigest;
-(NSDictionary *)recipientContext;
-(void)setIsOnline:(BOOL)arg1 ;
-(BOOL)isOnline;
-(NSString *)appContext;
-(NSString *)identifier;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

