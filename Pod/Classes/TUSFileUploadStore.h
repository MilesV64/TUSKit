//
//  TUSFileUploadStore.h
//  Pods
//
//  Created by Findyr on 6/17/16.
//
//

#import <TUSKit/TUSKit.h>
#import "TUSUploadStore.h"
@interface TUSFileUploadStore : TUSUploadStore
-(instancetype)initWithURL:(NSURL *)url;
@end
