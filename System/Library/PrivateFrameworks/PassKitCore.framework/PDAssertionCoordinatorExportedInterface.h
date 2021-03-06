/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDAssertionCoordinatorExportedInterface <PDXPCServiceExportedInterface>
@required
-(void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4;
-(void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 handler:(/*^block*/id)arg3;
-(void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 shouldInvalidateWhenBackgrounded:(BOOL)arg3;
-(void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 isValid:(/*^block*/id)arg3;

@end

