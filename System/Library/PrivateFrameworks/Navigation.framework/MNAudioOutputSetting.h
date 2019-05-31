/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface MNAudioOutputSetting : NSObject <NSSecureCoding> {

	NSSet* _pickableRoutes;
	BOOL _selected;
	BOOL _selectedForSystem;
	BOOL _hfpPreference;

}

@property (assign,nonatomic) BOOL selectedForSystem;              //@synthesize selectedForSystem=_selectedForSystem - In the implementation block
@property (nonatomic,readonly) BOOL hfpPreference; 
+(id)macAddressForRoute:(id)arg1 ;
+(BOOL)isBluetoothRoute:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithPickableRoutes:(id)arg1 ;
-(id)pickableRouteForHFPPreference:(BOOL)arg1 ;
-(BOOL)settingForBluetoothDevice;
-(id)macAddress;
-(BOOL)_isHFPRoute:(id)arg1 ;
-(BOOL)selectedForRouteSelection:(unsigned long long)arg1 ;
-(BOOL)settingForBluetoothComboDevice;
-(BOOL)settingSupportsBluetoothHFP;
-(BOOL)hfpPreference;
-(BOOL)_isPicked:(id)arg1 ;
-(BOOL)_pickRoute:(id)arg1 ;
-(void)setHfpPreference:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 shouldSetHFPPreference:(BOOL)arg2 ;
-(id)initWithPickableRoute:(id)arg1 ;
-(BOOL)containsPickableRoute:(id)arg1 ;
-(BOOL)isEqualToSetting:(id)arg1 ;
-(BOOL)settingForDefaultRoute;
-(BOOL)allowHFPPreferenceSelectionForRouteSelection:(unsigned long long)arg1 ;
-(BOOL)pickedStateConsistentWithHFPPreference;
-(BOOL)selectedForSystem;
-(void)setSelectedForSystem:(BOOL)arg1 ;
-(id)routeUID;
-(BOOL)isPicked;
-(void)setPicked:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setSelected:(BOOL)arg1 ;
@end

