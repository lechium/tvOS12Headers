/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSError;

@interface AXSimpleMessage : NSObject {

	NSDictionary* _payload;
	NSError* _error;

}

@property (nonatomic,retain) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
+(id)messageWithPayload:(id)arg1 ;
-(id)description;
-(NSDictionary *)payload;
-(id)initWithPayload:(id)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

