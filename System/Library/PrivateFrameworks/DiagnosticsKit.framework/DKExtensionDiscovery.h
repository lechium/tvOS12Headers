/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DKExtensionRegistry, OS_dispatch_queue;
#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
@class NSObject, NSCondition, NSSet, NSString;

@interface DKExtensionDiscovery : NSObject {

	BOOL _discoveryComplete;
	id<DKExtensionRegistry> _registry;
	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _discoveryQueue;
	NSCondition* _discoveryLock;
	NSSet* _services;

}

@property (nonatomic,retain) id<DKExtensionRegistry> registry;                         //@synthesize registry=_registry - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> discoveryQueue;              //@synthesize discoveryQueue=_discoveryQueue - In the implementation block
@property (nonatomic,retain) NSCondition * discoveryLock;                              //@synthesize discoveryLock=_discoveryLock - In the implementation block
@property (assign,nonatomic) BOOL discoveryComplete;                                   //@synthesize discoveryComplete=_discoveryComplete - In the implementation block
@property (nonatomic,retain) NSSet * services;                                         //@synthesize services=_services - In the implementation block
+(id)discoveryUsingExtensionRegistry:(id)arg1 services:(id)arg2 bundleIdentifier:(NSString*)arg3 ;
-(void)waitUntilComplete;
-(id<DKExtensionRegistry>)registry;
-(void)setRegistry:(id<DKExtensionRegistry>)arg1 ;
-(id)initWithExtensionRegistry:(id)arg1 services:(id)arg2 bundleIdentifier:(NSString*)arg3 ;
-(void)_beginExtensionDiscovery;
-(NSCondition *)discoveryLock;
-(void)setDiscoveryComplete:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)discoveryQueue;
-(void)_registerExtensions:(id)arg1 error:(id)arg2 ;
-(BOOL)discoveryComplete;
-(void)setDiscoveryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDiscoveryLock:(NSCondition *)arg1 ;
-(NSSet *)services;
-(void)setServices:(NSSet *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

