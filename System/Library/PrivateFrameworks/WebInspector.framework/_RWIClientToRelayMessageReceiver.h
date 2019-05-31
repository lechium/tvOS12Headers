/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _RWIClientToRelayMessageReceiver
@required
-(void)_rpc_reportIdentifier:(id)arg1;
-(void)_rpc_forwardDidClose:(id)arg1;
-(void)_rpc_forwardGetListing:(id)arg1;
-(void)_rpc_forwardIndicateWebView:(id)arg1;
-(void)_rpc_forwardSocketData:(id)arg1;
-(void)_rpc_forwardSocketSetup:(id)arg1;
-(void)_rpc_getConnectedApplications:(id)arg1;
-(void)_rpc_forwardAutomaticInspectionConfiguration:(id)arg1;
-(void)_rpc_forwardAutomaticInspectionRejection:(id)arg1;
-(void)_rpc_reportDriverConnected:(id)arg1;
-(void)_rpc_reportDriverUpdated:(id)arg1;
-(void)_rpc_reportDriverDisconnected:(id)arg1;
-(void)_rpc_forwardDriverStateChangeRequest:(id)arg1;
-(void)_rpc_getConnectedDrivers:(id)arg1;
-(void)_rpc_forwardAutomationSessionRequest:(id)arg1;
-(void)_rpc_requestApplicationLaunch:(id)arg1;

@end
