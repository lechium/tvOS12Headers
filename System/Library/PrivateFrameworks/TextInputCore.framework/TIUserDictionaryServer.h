/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIKeyboardActivityObserving.h>
#import <libobjc.A.dylib/TIUserDictionaryServing.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSObject, NSMutableArray, NSArray, NSString;

@interface TIUserDictionaryServer : NSObject <TIKeyboardActivityObserving, TIUserDictionaryServing> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _observers;
	NSArray* _cache;
	BOOL _updating;
	int _pendingUpdates;
	unsigned long long _keyboardActivityState;
	long long _recentClientCount;
	NSUUID* _userDictionaryUUID;

}

@property (nonatomic,copy) NSUUID * userDictionaryUUID;              //@synthesize userDictionaryUUID=_userDictionaryUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singletonInstance;
+(double)decrementClientDelay;
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(void)resetCache;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(NSUUID *)userDictionaryUUID;
-(void)setUserDictionaryUUID:(NSUUID *)arg1 ;
-(void)getPhraseShortcutPairs:(/*^block*/id)arg1 ;
-(void)updateCache;
-(void)loadPhraseShortcutPairs:(/*^block*/id)arg1 ;
-(void)managedKeyboardSettingsDidChange:(id)arg1 ;
-(void)incrementRecentClientCount;
-(void)decrementRecentClientCountAfterDelay;
-(void)handleIdleTimeout;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(id)addObserver:(/*^block*/id)arg1 ;
@end
