/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CAReportingDriver : NSObject {

	NSString* _groupName;
	NSString* _subGroupName;

}

@property (retain) NSString * groupName;                 //@synthesize groupName=_groupName - In the implementation block
@property (retain) NSString * subGroupName;              //@synthesize subGroupName=_subGroupName - In the implementation block
+(id)driverWithGroupName:(id)arg1 subGroupName:(id)arg2 ;
-(void)setSubGroupName:(NSString *)arg1 ;
-(NSString *)subGroupName;
-(id)description;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
@end

