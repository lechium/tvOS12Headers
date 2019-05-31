/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTStarkManager.h>

@interface RTStarkManager_CarKit : RTStarkManager {

	BOOL _trustedConnectionEstablished;

}

@property (assign,nonatomic) BOOL trustedConnectionEstablished;              //@synthesize trustedConnectionEstablished=_trustedConnectionEstablished - In the implementation block
-(void)setup;
-(void)_setup;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithDefaultsManager:(id)arg1 ;
-(BOOL)trustedConnectionEstablished;
-(void)_updateTrustedConnectionEstablished;
-(void)setTrustedConnectionEstablished:(BOOL)arg1 ;
-(void)onPairedVehiclesDidChange:(id)arg1 ;
-(void)_fetchConnectionStateWithHandler:(/*^block*/id)arg1 ;
@end
