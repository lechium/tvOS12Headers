/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber, NSDate, NSDictionary;

@interface RMAskForTimeResponse : NSObject <NSSecureCoding> {

	NSUUID* _associatedRequestIdentifier;
	long long _answer;
	NSNumber* _respondingUserDSID;
	NSNumber* _amountGranted;
	NSDate* _timeStamp;

}

@property (nonatomic,retain) NSUUID * associatedRequestIdentifier;              //@synthesize associatedRequestIdentifier=_associatedRequestIdentifier - In the implementation block
@property (assign,nonatomic) long long answer;                                  //@synthesize answer=_answer - In the implementation block
@property (nonatomic,retain) NSNumber * respondingUserDSID;                     //@synthesize respondingUserDSID=_respondingUserDSID - In the implementation block
@property (nonatomic,retain) NSNumber * amountGranted;                          //@synthesize amountGranted=_amountGranted - In the implementation block
@property (nonatomic,retain) NSDate * timeStamp;                                //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * payload; 
+(BOOL)supportsSecureCoding;
-(long long)answer;
-(void)setAnswer:(long long)arg1 ;
-(NSNumber *)amountGranted;
-(void)setAmountGranted:(NSNumber *)arg1 ;
-(NSUUID *)associatedRequestIdentifier;
-(NSNumber *)respondingUserDSID;
-(void)setAssociatedRequestIdentifier:(NSUUID *)arg1 ;
-(void)setRespondingUserDSID:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timeStamp;
-(void)setTimeStamp:(NSDate *)arg1 ;
-(NSDictionary *)payload;
-(id)initWithPayload:(id)arg1 ;
@end

