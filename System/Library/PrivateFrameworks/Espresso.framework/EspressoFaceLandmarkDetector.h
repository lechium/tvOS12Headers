/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Espresso/Espresso-Structs.h>
@interface EspressoFaceLandmarkDetector : NSObject {

	vImage_Buffer* crop_scaled;
	vImage_Buffer* crop_192;
	shared_ptr<Espresso::net>* net;
	shared_ptr<Espresso::net>* net_detect;
	vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > >* nets_sub_landmark;
	CGRect _newface;

}

@property (assign) CGRect newface;              //@synthesize newface=_newface - In the implementation block
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)detectInImageRect:(vImage_Buffer*)arg1 face:(CGRect)arg2 sublandmark:(BOOL)arg3 ;
-(void)setNewface:(CGRect)arg1 ;
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)extractSubLandmarksFromCrop192:(vImage_Buffer*)arg1 centers192:(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)arg2 ;
-(void)commonInit:(id)arg1 context:(shared_ptr<Espresso::abstract_context>*)arg2 platform:(int)arg3 computePath:(int)arg4 ;
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)detect:(vImage_Buffer*)arg1 face:(CGRect)arg2 sublandmark:(BOOL)arg3 doFaceRectFix:(BOOL)arg4 ;
-(CGRect)newface;
-(id)initWithNetworkAtPath:(id)arg1 context:(shared_ptr<Espresso::abstract_context>*)arg2 platform:(int)arg3 computePath:(int)arg4 ;
-(id)init;
-(void)dealloc;
@end

