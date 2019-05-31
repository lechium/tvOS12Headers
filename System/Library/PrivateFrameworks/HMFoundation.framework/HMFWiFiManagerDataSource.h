/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFWiFiManagerDataSource.h>
@class NSString;


@protocol HMFWiFiManagerDataSource <NSObject>
@property (assign,nonatomic,__weak) id<HMFWiFiManagerDataSourceDelegate> delegate; 
@property (assign,setter=setWoWAsserted:,getter=isWoWAsserted,nonatomic) BOOL wowAsserted; 
@property (nonatomic,copy,readonly) NSString * currentNetworkSSID; 
@required
+(id)MACAddressString;
-(void)performBlockAfterWoWReassertionDelay:(/*^block*/id)arg1;
-(BOOL)isWoWAsserted;
-(void)setWoWAsserted:(BOOL)arg1;
-(NSString *)currentNetworkSSID;
-(void)setDelegate:(id)arg1;
-(id<HMFWiFiManagerDataSourceDelegate>)delegate;

@end


@protocol HMFWiFiManagerDataSourceDelegate, OS_dispatch_queue;
@class NSString, NSObject;

@interface HMFWiFiManagerDataSource : HMFObject <HMFWiFiManagerDataSource> {

	id<HMFWiFiManagerDataSourceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	WiFiManagerClientRef _wifiClientReference;
	WiFiDeviceClientRef _wifiDeviceReference;
	WiFiNetworkRef _currentNetwork;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) WiFiManagerClientRef wifiClientReference;                                //@synthesize wifiClientReference=_wifiClientReference - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef wifiDeviceReference;                                   //@synthesize wifiDeviceReference=_wifiDeviceReference - In the implementation block
@property (assign,nonatomic) WiFiNetworkRef currentNetwork;                                             //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HMFWiFiManagerDataSourceDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=setWoWAsserted:,getter=isWoWAsserted,nonatomic) BOOL wowAsserted; 
@property (nonatomic,copy,readonly) NSString * currentNetworkSSID; 
+(id)MACAddressString;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)startWithWiFiDevice:(WiFiDeviceClientRef)arg1 ;
-(WiFiManagerClientRef)wifiClientReference;
-(WiFiDeviceClientRef)wifiDeviceReference;
-(void)setWifiDeviceReference:(WiFiDeviceClientRef)arg1 ;
-(void)_setCurrentNetwork:(WiFiNetworkRef)arg1 ;
-(void)performBlockAfterWoWReassertionDelay:(/*^block*/id)arg1 ;
-(BOOL)isWoWAsserted;
-(void)setWoWAsserted:(BOOL)arg1 ;
-(void)handleWiFiLinkChangedWithEventDictionary:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg1 ;
-(NSString *)currentNetworkSSID;
-(WiFiNetworkRef)currentNetwork;
-(void)setCurrentNetwork:(WiFiNetworkRef)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<HMFWiFiManagerDataSourceDelegate>)arg1 ;
-(id<HMFWiFiManagerDataSourceDelegate>)delegate;
@end

