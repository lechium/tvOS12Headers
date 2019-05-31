/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSItemProvider, UIImage, NSString;


@protocol VSLogoImageViewModel <NSObject>
@property (nonatomic,retain) NSItemProvider * logoProvider; 
@property (nonatomic,retain) UIImage * logo; 
@property (nonatomic,copy) NSString * logoAccessibilityLabel; 
@required
-(void)setLogo:(id)arg1;
-(UIImage *)logo;
-(void)setLogoProvider:(id)arg1;
-(NSItemProvider *)logoProvider;
-(NSString *)logoAccessibilityLabel;
-(void)setLogoAccessibilityLabel:(id)arg1;

@end

