/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIScrollView, IKViewElement;

@interface _TVNeedsMoreContentEvaluator : NSObject {

	UIScrollView* _scrollView;
	long long _axis;
	long long _state;
	IKViewElement* _viewElement;
	double _threshold;

}

@property (assign,nonatomic) long long state;                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double threshold;                         //@synthesize threshold=_threshold - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) long long axis;                         //@synthesize axis=_axis - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
-(double)threshold;
-(void)setThreshold:(double)arg1 ;
-(IKViewElement *)viewElement;
-(id)initWithScrollView:(id)arg1 axis:(long long)arg2 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)evaluateForState:(long long)arg1 ;
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(long long)axis;
-(UIScrollView *)scrollView;
@end

