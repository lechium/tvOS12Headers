/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKProcessAssertionBackgroundTaskManager : NSObject {

	unsigned _needsToRunInBackgroundCount;
	unsigned long long _backgroundTask;
	HashSet<WebKit::ProcessAssertionClient *, WTF::PtrHash<WebKit::ProcessAssertionClient *>, WTF::HashTraits<WebKit::ProcessAssertionClient *> >* _clients;

}
+(id)shared;
-(void)_notifyClientsOfImminentSuspension;
-(void)_updateBackgroundTask;
-(void)incrementNeedsToRunInBackgroundCount;
-(void)decrementNeedsToRunInBackgroundCount;
-(id)init;
-(void)dealloc;
-(void)addClient:(ProcessAssertionClient*)arg1 ;
-(void)removeClient:(ProcessAssertionClient*)arg1 ;
@end

