/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, UIFont;

@interface StocksStyle : NSObject {

	UIColor* _chartHighlightColor;
	UIFont* _mainFont;
	UIFont* _chartLabelFont;

}
+(id)sharedStyle;
-(void)resetLocale;
-(id)lightFontOfSize:(double)arg1 ;
-(id)boldFontOfSize:(double)arg1 ;
-(id)gainColor;
-(id)lossColor;
-(id)chartHighlightColor;
-(id)fontOfSize:(double)arg1 ;
-(id)mediumFontOfSize:(double)arg1 ;
-(id)init;
@end
