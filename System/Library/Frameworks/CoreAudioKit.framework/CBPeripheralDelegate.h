/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBPeripheralDelegate <NSObject>
@optional
-(void)peripheralDidUpdateName:(id)arg1;
-(void)peripheral:(id)arg1 didModifyServices:(id)arg2;
-(void)peripheralDidUpdateRSSI:(id)arg1 error:(id)arg2;
-(void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
-(void)peripheral:(id)arg1 didDiscoverIncludedServicesForService:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didWriteValueForDescriptor:(id)arg2 error:(id)arg3;
-(void)peripheralIsReadyToSendWriteWithoutResponse:(id)arg1;
-(void)peripheral:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3;

@end

