/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NRMutableStateProtocol <NSObject,NSSecureCoding,NSCopying,NRMutableStateObserverProtocol,NRMutableStateParentProtocol>
@required
+(id)diffFrom:(id)arg1 to:(id)arg2;
-(id)applyDiff:(id)arg1;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4;

@end

