/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLRegressor.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>
#import <libobjc.A.dylib/MLCompiledModelLoader.h>
#import <libobjc.A.dylib/MLSpecificationCompiler.h>

@class NSArray, NSString;

@interface MLTreeEnsembleRegressor : MLRegressor <MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler> {

	shared_ptr<Archiver::MMappedFile>* _mmapped_model;
	vector<unsigned char, std::__1::allocator<unsigned char> > _cached_model;
	unsigned long long num_dimensions;
	NSArray* output_classes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)compileSpecification:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)compiledVersionForSpecification:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)loadModelFromSpecificationWithCompilationOptions:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(const char*)_model_data;
-(double)scalarRegress:(id)arg1 error:(id*)arg2 ;
-(double)scalarRegress:(double*)arg1 ;
-(void)vectorRegress:(double*)arg1 dest:(double*)arg2 ;
@end

