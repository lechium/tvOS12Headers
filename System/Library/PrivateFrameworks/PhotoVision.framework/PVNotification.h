/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PVNotification : NSObject {

	NSString* _name;
	id _details;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id details;                   //@synthesize details=_details - In the implementation block
+(id)notificationWithName:(id)arg1 details:(id)arg2 ;
+(id)notificationWithName:(id)arg1 ;
-(id)details;
-(id)initWithName:(id)arg1 details:(id)arg2 ;
-(NSString *)name;
-(id)description;
@end

