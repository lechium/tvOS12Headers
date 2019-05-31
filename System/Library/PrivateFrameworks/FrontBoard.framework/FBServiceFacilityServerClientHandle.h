/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBasicServerClient.h>
#import <libobjc.A.dylib/FBSServiceFacilityClientHandle_Internal.h>

@protocol FBSServiceFacilityClientContext;
@class NSString, FBProcess, BSProcessHandle;

@interface FBServiceFacilityServerClientHandle : BSBasicServerClient <FBSServiceFacilityClientHandle_Internal> {

	BOOL _uiApp;
	NSString* _bundleID;
	BOOL _extension;
	BOOL _suspended;
	NSString* _facilityID;
	FBProcess* _process;
	BSProcessHandle* _processHandle;
	id<FBSServiceFacilityClientContext> _context;
	NSString* _bundlePath;

}

@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) NSString * bundleID;                                    //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,getter=isUIApp,nonatomic) BOOL UIApp;                                //@synthesize uiApp=_uiApp - In the implementation block
@property (assign,getter=isExtension,nonatomic) BOOL extension;                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSString * bundlePath;                                    //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy) NSString * facilityID;                                      //@synthesize facilityID=_facilityID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended;                      //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,readonly) BSProcessHandle * processHandle; 
@property (nonatomic,retain) id<FBSServiceFacilityClientContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
-(id)initWithConnection:(id)arg1 ;
-(void)setUIApp:(BOOL)arg1 ;
-(BOOL)isUIApp;
-(BSProcessHandle *)processHandle;
-(NSString *)facilityID;
-(void)setFacilityID:(NSString *)arg1 ;
-(BOOL)isExtension;
-(int)pid;
-(NSString *)description;
-(void)setContext:(id<FBSServiceFacilityClientContext>)arg1 ;
-(id<FBSServiceFacilityClientContext>)context;
-(void)setExtension:(BOOL)arg1 ;
-(void)resume;
-(NSString *)bundlePath;
-(BOOL)isSuspended;
-(NSString *)bundleID;
-(void)suspend;
-(void)setBundlePath:(NSString *)arg1 ;
@end

