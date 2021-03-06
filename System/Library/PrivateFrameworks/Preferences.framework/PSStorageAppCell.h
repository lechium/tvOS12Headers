/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSMutableArray, UIImageView, UILabel;

@interface PSStorageAppCell : PSTableCell {

	NSMutableArray* _constraints;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _infoLabel;
	UILabel* _sizeLabel;
	long long _size;

}
+(id)specifierForStorageApp:(id)arg1 ;
+(id)specifierForAppProxy:(id)arg1 ;
+(id)specifierForAppIdentifier:(id)arg1 ;
+(id)specifierForAppBundleURL:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)updateConstraints;
@end

