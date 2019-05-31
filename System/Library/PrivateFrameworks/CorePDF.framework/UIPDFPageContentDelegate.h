/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class UIPDFDocument, UIPDFPageView, CALayer;

@interface UIPDFPageContentDelegate : NSObject {

	UIPDFDocument* _document;
	unsigned long long _pageIndex;
	UIPDFPageView* _view;
	CGRect _bounds;
	CGAffineTransform _transform;
	CGColorRef _white;
	CGColorRef _highlightColor;
	CALayer* _owner;
	CGRect _box;
	unsigned long long _pageRotation;
	os_unfair_lock_s _lock;
	unsigned long long _threadCount;
	BOOL _isCancelled;

}

@property (retain) UIPDFDocument * document;                     //@synthesize document=_document - In the implementation block
@property (assign) unsigned long long pageIndex;                 //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign) UIPDFPageView * view; 
@property (assign) CALayer * owner;                              //@synthesize owner=_owner - In the implementation block
@property (assign) CGRect box;                                   //@synthesize box=_box - In the implementation block
@property (assign) unsigned long long pageRotation;              //@synthesize pageRotation=_pageRotation - In the implementation block
@property (assign) CGColorRef highlightColor;                    //@synthesize highlightColor=_highlightColor - In the implementation block
@property (readonly) CGAffineTransform transform;                //@synthesize transform=_transform - In the implementation block
@property (assign) BOOL isCancelled; 
-(void)computeTransform;
-(BOOL)pageHasSelection;
-(void)drawSelectionLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setPageRotation:(unsigned long long)arg1 ;
-(void)drawSelectionLayerBlockMode:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)addRect:(CGRect)arg1 toPath:(CGPathRef)arg2 transform:(CGAffineTransform*)arg3 view:(id)arg4 owner:(id)arg5 ;
-(unsigned long long)pageRotation;
-(void)setBox:(CGRect)arg1 ;
-(CGRect)box;
-(void)setIsCancelled:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(UIPDFPageView *)view;
-(void)setView:(UIPDFPageView *)arg1 ;
-(CGAffineTransform)transform;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)isCancelled;
-(void)setDocument:(UIPDFDocument *)arg1 ;
-(CALayer *)owner;
-(void)setOwner:(CALayer *)arg1 ;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(UIPDFDocument *)document;
-(CGColorRef)highlightColor;
-(void)setHighlightColor:(CGColorRef)arg1 ;
@end

