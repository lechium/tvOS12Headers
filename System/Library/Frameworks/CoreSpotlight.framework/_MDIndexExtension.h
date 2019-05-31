/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSSet, NSExtension;

@interface _MDIndexExtension : NSObject {

	BOOL _entitlementVerified;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _containerID;
	NSSet* _identifiers;
	NSExtension* _extension;
	NSString* _containerPath;
	NSString* _extensionID;

}

@property (nonatomic,retain) NSExtension * extension;                         //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * containerPath;                        //@synthesize containerPath=_containerPath - In the implementation block
@property (nonatomic,retain) NSString * containerID;                          //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSString * extensionID;                          //@synthesize extensionID=_extensionID - In the implementation block
@property (assign,nonatomic) BOOL entitlementVerified;                        //@synthesize entitlementVerified=_entitlementVerified - In the implementation block
@property (readonly) BOOL isEnabled; 
@property (readonly) BOOL isInternal; 
@property (readonly) BOOL dontRunDuringMigration; 
@property (copy) NSSet * identifiers;                                         //@synthesize identifiers=_identifiers - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSSet *)identifiers;
-(void)setIdentifiers:(NSSet *)arg1 ;
-(BOOL)dontRunDuringMigration;
-(BOOL)entitlementVerified;
-(void)setEntitlementVerified:(BOOL)arg1 ;
-(BOOL)_verifyIntegrityWithHostContext:(id)arg1 ;
-(void)_performJob:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithExtension:(id)arg1 queue:(id)arg2 containerPath:(id)arg3 containerID:(id)arg4 ;
-(void)performJob:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setContainerPath:(NSString *)arg1 ;
-(NSString *)containerPath;
-(NSString *)containerID;
-(void)setContainerID:(NSString *)arg1 ;
-(void)setExtensionID:(NSString *)arg1 ;
-(NSString *)extensionID;
-(BOOL)isInternal;
-(id)description;
-(BOOL)isEnabled;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(NSObject*<OS_dispatch_queue>)queue;
@end

