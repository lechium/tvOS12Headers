/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>

@class NSString, PSCellularUsage;

@interface PSAppCellularUsageSpecifier : PSSpecifier {

	BOOL _shouldUseBillingCycleData;
	BOOL _shouldShowUsage;
	BOOL _canEnable;
	int _selectedBillingCycle;
	NSString* _appName;
	NSString* _bundleID;
	PSCellularUsage* _usage;

}

@property (assign,nonatomic) BOOL canEnable;                              //@synthesize canEnable=_canEnable - In the implementation block
@property (nonatomic,retain) NSString * appName;                          //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) PSCellularUsage * usage;                       //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) BOOL shouldUseBillingCycleData;              //@synthesize shouldUseBillingCycleData=_shouldUseBillingCycleData - In the implementation block
@property (assign,nonatomic) int selectedBillingCycle;                    //@synthesize selectedBillingCycle=_selectedBillingCycle - In the implementation block
@property (assign,nonatomic) BOOL shouldShowUsage;                        //@synthesize shouldShowUsage=_shouldShowUsage - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
+(id)_specifierWithCellTitle:(id)arg1 appName:(id)arg2 bundleID:(id)arg3 canBeEnabled:(BOOL)arg4 shouldShowUsage:(BOOL)arg5 target:(id)arg6 set:(SEL)arg7 get:(SEL)arg8 icon:(id)arg9 ;
+(id)appSpecifierWithUsage:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 ;
+(id)systemPolicySpecifierForAppName:(id)arg1 bundleID:(id)arg2 icon:(id)arg3 enabled:(BOOL)arg4 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setUsage:(PSCellularUsage *)arg1 ;
-(id)dataUsageString;
-(BOOL)setCellularUsagePolicy:(id)arg1 ;
-(id)cellularUsagePolicy;
-(BOOL)canEnable;
-(void)prefetchCellularUsagePolicy;
-(void)setShouldShowUsage:(BOOL)arg1 ;
-(void)setCanEnable:(BOOL)arg1 ;
-(BOOL)shouldUseBillingCycleData;
-(int)selectedBillingCycle;
-(double)dataUsage;
-(id)initWithName:(id)arg1 usage:(id)arg2 ;
-(void)setShouldUseBillingCycleData:(BOOL)arg1 ;
-(void)setSelectedBillingCycle:(int)arg1 ;
-(BOOL)shouldShowUsage;
-(void)setAppName:(NSString *)arg1 ;
-(PSCellularUsage *)usage;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSString *)bundleID;
-(NSString *)appName;
@end

