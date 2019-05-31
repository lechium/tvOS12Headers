/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EAWiFiUnconfiguredAccessoryBrowserDelegate, OS_dispatch_queue;
@class NSSet, NSObject, NSPredicate;

@interface EAWiFiUnconfiguredAccessoryBrowser : NSObject {

	BOOL __debugLog;
	id<EAWiFiUnconfiguredAccessoryBrowserDelegate> _delegate;
	NSSet* _unconfiguredAccessories;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSPredicate* _accessorySearchPredicate;

}

@property (retain) NSObject*<OS_dispatch_queue> delegateQueue;                                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (retain) NSPredicate * accessorySearchPredicate;                                                //@synthesize accessorySearchPredicate=_accessorySearchPredicate - In the implementation block
@property (assign,nonatomic,__weak) id<EAWiFiUnconfiguredAccessoryBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSSet * unconfiguredAccessories;                                                //@synthesize unconfiguredAccessories=_unconfiguredAccessories - In the implementation block
-(NSSet *)unconfiguredAccessories;
-(NSPredicate *)accessorySearchPredicate;
-(void)setAccessorySearchPredicate:(NSPredicate *)arg1 ;
-(void)setDelegate:(id<EAWiFiUnconfiguredAccessoryBrowserDelegate>)arg1 ;
-(id<EAWiFiUnconfiguredAccessoryBrowserDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

