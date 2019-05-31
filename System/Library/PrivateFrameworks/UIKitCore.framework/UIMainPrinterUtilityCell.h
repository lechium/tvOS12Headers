/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class NSArray;

@interface UIMainPrinterUtilityCell : UITableViewCell {

	NSArray* _supplyLevelViews;
	BOOL _showSupplyDataUnderPrinterName;
	NSArray* _supplies;

}

@property (nonatomic,retain) NSArray * supplies;                               //@synthesize supplies=_supplies - In the implementation block
@property (assign,nonatomic) BOOL showSupplyDataUnderPrinterName;              //@synthesize showSupplyDataUnderPrinterName=_showSupplyDataUnderPrinterName - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)showSupplyDataUnderPrinterName;
-(void)setSupplies:(NSArray *)arg1 ;
-(NSArray *)supplies;
-(void)setShowSupplyDataUnderPrinterName:(BOOL)arg1 ;
@end

