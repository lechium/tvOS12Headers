/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DMFConfigurationSourceClientInterface <NSObject>
@required
-(void)probe:(/*^block*/id)arg1;
-(void)configurationStatusDidChange:(id)arg1 completion:(/*^block*/id)arg2;
-(void)configurationEventsDidChange:(id)arg1 completion:(/*^block*/id)arg2;
-(void)configurationEngineRequestedAsset:(id)arg1 completion:(/*^block*/id)arg2;

@end

