/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMRoom, NSString;

@interface TVCSRoom : NSObject {

	HMRoom* _hmRoom;

}

@property (nonatomic,retain) HMRoom * hmRoom;              //@synthesize hmRoom=_hmRoom - In the implementation block
@property (readonly) NSString * name; 
+(id)_roomWithHMRoom:(id)arg1 ;
-(void)setHmRoom:(HMRoom *)arg1 ;
-(HMRoom *)hmRoom;
-(NSString *)name;
-(id)description;
@end

