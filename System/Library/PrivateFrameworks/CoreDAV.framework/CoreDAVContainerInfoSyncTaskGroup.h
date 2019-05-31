/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class NSString, NSURL;

@interface CoreDAVContainerInfoSyncTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {

	NSString* _previousSyncToken;
	NSURL* _containerURL;

}

@property (assign,nonatomic,__weak) id<CoreDAVContainerInfoSyncProvider> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(id)copyContainerParserMappings;
-(Class)containerItemClass;
-(id)initWithContainerURL:(id)arg1 previousSyncToken:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
-(NSString *)description;
-(void)setDelegate:(id<CoreDAVContainerInfoSyncProvider>)arg1 ;
-(id<CoreDAVContainerInfoSyncProvider>)delegate;
@end

