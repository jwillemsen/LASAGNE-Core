### LASAGNE-Core 1.5.1

##### Changes:
- Now supported by ACE-TAO 6.4.5
- Verified support for OpenDDS 3.12
- Verified support for RTI Connext DDS 5.3.0
- Added support for CoreDX 4.0.12
- Expanded CI tooling to support g++7 and clang

##### Fixes:
- Removed throw specifications on DDS listener methods in training samples
_______________________________________________________________________________

### LASAGNE-Core 1.5.0

##### Changes:
- Discovery replies are now decoupled from main reactor threads
- Added a DAF-layer implementation of the service gestalt
- Added support for unregistering types when using DDS (addresses some DDS close-out issues)
- Added an IORResolver concept as a companion to IORBinder
- Added support for format specifiers within configuration section names
- Improved stability of forced thread termination via TaskExecutor
- Refactored Semaphore implementation to improve liveliness
- Refactored SynchronousChannel implementation to use Doug Lea's transactional model
- Removed deprecated WaiterPreferenceSemaphore.h
- Various improvements based on Codacy issue reports
- Now supported by ACE-TAO 6.4.4

##### Fixes:
- Fixed TSS cleanup when performing forced thread termination via TaskExecutor
- Fixed positive thread hand-off in the case of thread creation within TaskExecutor
- Fixed lingering SVN-style authorship comment blocks
- Fixed unintended use of C++11 exception constructors
- Fixed security properties to use positive logic
- Fixed ORB initialiser hooks for TAF Extensions so they are not still in place for non-primary ORBs
- Fixed initialisation order for process-wide reactor and object manager
- Now using ACE_UNIMPLEMENTED_FUNC instead of ACE_Copy_Disabled

##### Notes:
- Higher-order concurrency elements (Barrier, FutureResult, Rendezvous) will be refactored in a subsequent release.
_______________________________________________________________________________

### LASAGNE-Core 1.4.4

##### Changes:
- Support for Visual Studio 2017
- Support for GCC 6.2
- Updated supplied SQLite3 package to version 3.19.2
- Added .gitignore file to aid filtering on commits
- Added a version file
- Added a changelog
- Added last_error translation to DAF_OS for Windows error number reporting
- IORBinder used with the Naming Service now defaults to the base context specified via properties
- Changed name of DAF_UNUSED_ARG to DAF_UNUSED_STATIC to better reflect intended use
- Modified training exercises to use assignment to DDS topic instances

##### Fixes:
- Fixed use of magnitude operator for comparisons in DAF_OS
- Fixed enable discovery (within a TAFServer) property to use positive logic
- Fixed support for ARMv7 builds on Debian
- Fixed contribution guidelines to properly refer to develop as the default target for pull requests
- Fixed training IDL filenames to avoid name clashes on RTI builds
- Fixed leftover Subversion tags
- Fixed exception specifications (removed)
- Fixed an issue with CORBAInterfaceHandler servant deactivation through the destructor
- Fixed selective support for OpenDDS Java bindings within projects

##### Notes:
- There is not currently support for wide-character builds
_______________________________________________________________________________

### LASAGNE-Core 1.4.3

##### Notes:
- Initial GitHub release
