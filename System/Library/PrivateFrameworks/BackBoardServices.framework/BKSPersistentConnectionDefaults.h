/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface BKSPersistentConnectionDefaults : BSAbstractDefaultDomain

@property (assign,nonatomic) int forceDemoMaxHBI; 
@property (nonatomic,retain) NSString * wifiInterfaceName; 
-(void)setWifiInterfaceName:(NSString *)arg1 ;
-(NSString *)wifiInterfaceName;
-(void)setForceDemoMaxHBI:(int)arg1 ;
-(int)forceDemoMaxHBI;
-(void)_bindAndRegisterDefaults;
-(id)init;
@end
