/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSAuthenticationToken.h>

@class NSDate, NSString, NSData;

@interface VSSAMLAuthenticationToken : NSObject <VSAuthenticationToken> {

	NSData* _serializedData;

}

@property (nonatomic,copy) NSData * serializedData;                       //@synthesize serializedData=_serializedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * body; 
-(NSDate *)expirationDate;
-(NSData *)serializedData;
-(void)setSerializedData:(NSData *)arg1 ;
-(id)initWithSerializedData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isOpaque;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(BOOL)isValid;
@end
