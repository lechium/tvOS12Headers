/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem {

	NSMutableSet* _responses;
	NSMutableSet* _successfulICS;
	NSMutableSet* _failedResponseItems;

}

@property (nonatomic,retain) NSMutableSet * responses;                        //@synthesize responses=_responses - In the implementation block
@property (nonatomic,retain) NSMutableSet * successfulICS;                    //@synthesize successfulICS=_successfulICS - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedResponseItems;              //@synthesize failedResponseItems=_failedResponseItems - In the implementation block
-(NSMutableSet *)responses;
-(void)setResponses:(NSMutableSet *)arg1 ;
-(id)copyParseRules;
-(void)addNewTopLevelItem:(id)arg1 ;
-(NSMutableSet *)successfulICS;
-(void)setSuccessfulICS:(NSMutableSet *)arg1 ;
-(NSMutableSet *)failedResponseItems;
-(void)setFailedResponseItems:(NSMutableSet *)arg1 ;
-(id)description;
@end
