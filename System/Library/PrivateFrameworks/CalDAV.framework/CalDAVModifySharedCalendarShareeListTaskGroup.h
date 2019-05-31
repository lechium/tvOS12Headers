/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPostTaskDelegate.h>

@class NSMutableSet, NSSet, NSURL, NSString;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {

	NSMutableSet* _invalidSharees;
	NSSet* _shareesToRemove;
	NSSet* _shareesToSet;
	NSURL* _calendarURL;
	NSString* _summary;

}

@property (nonatomic,retain) NSSet * shareesToRemove;                            //@synthesize shareesToRemove=_shareesToRemove - In the implementation block
@property (nonatomic,retain) NSSet * shareesToSet;                               //@synthesize shareesToSet=_shareesToSet - In the implementation block
@property (nonatomic,retain) NSURL * calendarURL;                                //@synthesize calendarURL=_calendarURL - In the implementation block
@property (nonatomic,retain) NSString * summary;                                 //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSMutableSet * invalidSharees;                      //@synthesize invalidSharees=_invalidSharees - In the implementation block
@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)summary;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setSummary:(NSString *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)startTaskGroup;
-(NSURL *)calendarURL;
-(void)setShareesToRemove:(NSSet *)arg1 ;
-(void)setShareesToSet:(NSSet *)arg1 ;
-(void)setCalendarURL:(NSURL *)arg1 ;
-(void)setInvalidSharees:(NSMutableSet *)arg1 ;
-(id)generateModificationMessageBody;
-(NSSet *)shareesToSet;
-(NSSet *)shareesToRemove;
-(NSMutableSet *)invalidSharees;
-(id)initWithShareesToSet:(id)arg1 shareesToRemove:(id)arg2 summary:(id)arg3 atCalendarURL:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 ;
@end

