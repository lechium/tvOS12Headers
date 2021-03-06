/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HMHome, HFUserNotificationServiceTopic;

@interface HFUserNotificationServiceTopicItem : HFItem {

	HMHome* _home;
	HFUserNotificationServiceTopic* _topic;

}

@property (nonatomic,readonly) HMHome * home;                                       //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFUserNotificationServiceTopic * topic;              //@synthesize topic=_topic - In the implementation block
-(HMHome *)home;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithHome:(id)arg1 topic:(id)arg2 ;
-(HFUserNotificationServiceTopic *)topic;
@end

