/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBWebsiteDataRecord;

@interface WBSettingsTask : NSObject {

	long long _taskType;
	WBWebsiteDataRecord* _websiteDataRecord;

}

@property (nonatomic,readonly) long long taskType;                                   //@synthesize taskType=_taskType - In the implementation block
@property (nonatomic,readonly) WBWebsiteDataRecord * websiteDataRecord;              //@synthesize websiteDataRecord=_websiteDataRecord - In the implementation block
+(id)taskForDeletingIndividualWebsiteDataWithRecord:(id)arg1 ;
+(id)taskWithType:(long long)arg1 ;
-(long long)taskType;
-(id)initWithType:(long long)arg1 websiteDataRecord:(id)arg2 ;
-(WBWebsiteDataRecord *)websiteDataRecord;
@end

