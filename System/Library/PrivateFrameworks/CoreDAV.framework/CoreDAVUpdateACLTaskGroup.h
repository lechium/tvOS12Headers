/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>
#import <CoreDAV/CoreDAVACLTaskDelegate.h>

@class NSSet, NSURL, CoreDAVPropFindTask, NSString;

@interface CoreDAVUpdateACLTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVACLTaskDelegate> {

	int _state;
	NSSet* _aceItems;
	NSURL* _url;
	CoreDAVPropFindTask* _fetchTask;

}

@property (nonatomic,retain) NSSet * aceItems;                             //@synthesize aceItems=_aceItems - In the implementation block
@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) CoreDAVPropFindTask * fetchTask;              //@synthesize fetchTask=_fetchTask - In the implementation block
@property (assign,nonatomic) int state;                                    //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_startGetACL;
-(void)_startSetACLWithAccessControlEntities:(id)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)setFetchTask:(CoreDAVPropFindTask *)arg1 ;
-(CoreDAVPropFindTask *)fetchTask;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)setAceItems:(NSSet *)arg1 ;
-(NSSet *)aceItems;
-(id)initWithAccountInfoProvider:(id)arg1 aceItems:(id)arg2 url:(id)arg3 taskManager:(id)arg4 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
@end

