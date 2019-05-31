/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDP/CoreCDP-Structs.h>
#import <libobjc.A.dylib/CDPDCircleProxy.h>

@class CDPContext, NSString;

@interface CDPCircleProxyImpl : NSObject <CDPDCircleProxy> {

	CDPContext* _cdpContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CDPContext * cdpContext;               //@synthesize cdpContext=_cdpContext - In the implementation block
+(BOOL)registerCredentialsFromContext:(id)arg1 ;
+(BOOL)canAuthenticate;
+(BOOL)registerCredentialsFromContext:(id)arg1 force:(BOOL)arg2 ;
+(BOOL)tryRegisteringCredentialsFromContext:(id)arg1 ;
-(int)_authenticatedCircleStatus:(id*)arg1 ;
-(int)_circleStatus:(id*)arg1 ;
-(BOOL)_performSOSCBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)_viewMemberForView:(CFStringRef)arg1 error:(id*)arg2 ;
-(BOOL)viewMemberForPCSMaster:(id*)arg1 ;
-(BOOL)isLastBackupMakingPeer:(id*)arg1 ;
-(int)circleStatus:(id*)arg1 ;
-(CDPContext *)cdpContext;
-(void)setCdpContext:(CDPContext *)arg1 ;
-(id)peerId;
-(BOOL)synchronizeCircleViews;
-(BOOL)removeThisDeviceFromCircle:(id*)arg1 ;
-(unsigned long long)peerCount;
-(BOOL)requestToJoinCircleAfterRestore:(id*)arg1 ;
-(BOOL)requestToResetCircle:(id*)arg1 ;
-(BOOL)requestToResetCloudKitDataForReason:(id)arg1 error:(id*)arg2 ;
-(id)peerDeviceNamesByPeerID;
-(BOOL)requestToJoinCircle:(id*)arg1 ;
-(id)generateVerifierWithRcoveryKey:(id)arg1 error:(id*)arg2 ;
-(id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasNonViewAwarePeers;
-(BOOL)viewMemberForAutofillPasswords:(id*)arg1 ;
-(BOOL)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2 ;
-(BOOL)removeNonViewAwarePeers:(id*)arg1 ;
-(BOOL)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id*)arg2 ;
-(id)initWithContext:(id)arg1 ;
@end

