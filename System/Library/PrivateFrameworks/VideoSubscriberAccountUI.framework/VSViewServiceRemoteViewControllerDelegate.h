/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSViewServiceRemoteViewControllerDelegate <NSObject>
@required
-(void)presentViewServiceRemoteViewController:(id)arg1;
-(void)dismissViewServiceRemoteViewController:(id)arg1;
-(void)viewServiceRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
-(void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;
-(void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
-(void)viewServiceRemoteViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
-(void)viewServiceRemoteViewController:(id)arg1 didCancelRequest:(id)arg2;
-(void)viewServiceRemoteViewController:(id)arg1 didSelectProviderWithIdentifier:(id)arg2 vetoHandler:(/*^block*/id)arg3;

@end

