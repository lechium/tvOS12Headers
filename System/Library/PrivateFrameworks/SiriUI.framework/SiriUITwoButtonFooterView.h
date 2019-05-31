/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIReusableFooterView.h>

@class SiriUIKeyline, SiriUIContentButton;

@interface SiriUITwoButtonFooterView : SiriUIReusableFooterView {

	SiriUIKeyline* _verticalKeyline;
	SiriUIKeyline* _horizontalKeyline;
	SiriUIContentButton* _leftButton;
	SiriUIContentButton* _rightButton;

}

@property (nonatomic,readonly) SiriUIContentButton * leftButton;               //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) SiriUIContentButton * rightButton;              //@synthesize rightButton=_rightButton - In the implementation block
+(double)defaultHeight;
-(SiriUIContentButton *)leftButton;
-(SiriUIContentButton *)rightButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end

