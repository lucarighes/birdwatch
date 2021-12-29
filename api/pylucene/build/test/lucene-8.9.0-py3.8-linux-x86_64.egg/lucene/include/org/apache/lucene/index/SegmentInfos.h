#ifndef org_apache_lucene_index_SegmentInfos_H
#define org_apache_lucene_index_SegmentInfos_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class Directory;
        class ChecksumIndexInput;
      }
      namespace util {
        class Version;
      }
      namespace index {
        class SegmentCommitInfo;
        class SegmentInfos;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Collection;
    class Iterator;
    class List;
  }
  namespace lang {
    class Cloneable;
    class Class;
    class Iterable;
    class String;
  }
  namespace io {
    class PrintStream;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SegmentInfos : public ::java::lang::Object {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_add_7d313206bbb3a99e,
            mid_addAll_870d7079aa6e0153,
            mid_asList_49ec78390f08338a,
            mid_changed_f2cc1bce94666404,
            mid_clear_f2cc1bce94666404,
            mid_clone_ecb6478d4be6f78b,
            mid_commit_c51fd9fb1cf0392d,
            mid_files_1e58293f3e39a94d,
            mid_generationFromSegmentsFileName_b1e05207ec98e246,
            mid_getCommitLuceneVersion_6b68647131bbda98,
            mid_getGeneration_2e5ae9edcb9b072f,
            mid_getId_cf386cdb1bbd339f,
            mid_getIndexCreatedVersionMajor_9972fcc56b44e79d,
            mid_getInfoStream_ca93edb3fa5e382a,
            mid_getLastCommitGeneration_2645a42e82b64cfd,
            mid_getLastCommitGeneration_1c7024a1b916813b,
            mid_getLastCommitSegmentsFileName_03dae215009b5a7f,
            mid_getLastCommitSegmentsFileName_903f3c17c153fcea,
            mid_getLastGeneration_2e5ae9edcb9b072f,
            mid_getMinSegmentLuceneVersion_6b68647131bbda98,
            mid_getSegmentsFileName_db9b55ba01e03e4b,
            mid_getUserData_1c3426541413a55d,
            mid_getVersion_2e5ae9edcb9b072f,
            mid_info_17ae6f750dbaeb23,
            mid_iterator_233a192dadb0917d,
            mid_readCommit_dc2ddc5fb1272828,
            mid_readCommit_178e290a82003bdc,
            mid_readLatestCommit_8e40a1439832b534,
            mid_remove_1cbd6355ff4ad765,
            mid_setInfoStream_51d7bcb97eea24e3,
            mid_setNextWriteGeneration_9c778c9bce6694df,
            mid_setUserData_f2949932cebbb77f,
            mid_size_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            mid_totalMaxDoc_9972fcc56b44e79d,
            mid_updateGeneration_3f9b7fbda4d2a096,
            mid_write_c832dc158b3caad3,
            max_mid
          };

          enum {
            fid_counter,
            fid_userData,
            fid_version,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentInfos(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentInfos(const SegmentInfos& obj) : ::java::lang::Object(obj) {}

          static jint VERSION_70;
          static jint VERSION_72;
          static jint VERSION_74;
          static jint VERSION_86;

          jlong _get_counter() const;
          void _set_counter(jlong) const;
          ::java::util::Map _get_userData() const;
          void _set_userData(const ::java::util::Map &) const;
          jlong _get_version() const;
          void _set_version(jlong) const;

          SegmentInfos(jint);

          void add(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          void addAll(const ::java::lang::Iterable &) const;
          ::java::util::List asList() const;
          void changed() const;
          void clear() const;
          SegmentInfos clone() const;
          void commit(const ::org::apache::lucene::store::Directory &) const;
          ::java::util::Collection files(jboolean) const;
          static jlong generationFromSegmentsFileName(const ::java::lang::String &);
          ::org::apache::lucene::util::Version getCommitLuceneVersion() const;
          jlong getGeneration() const;
          JArray< jbyte > getId() const;
          jint getIndexCreatedVersionMajor() const;
          static ::java::io::PrintStream getInfoStream();
          static jlong getLastCommitGeneration(const JArray< ::java::lang::String > &);
          static jlong getLastCommitGeneration(const ::org::apache::lucene::store::Directory &);
          static ::java::lang::String getLastCommitSegmentsFileName(const JArray< ::java::lang::String > &);
          static ::java::lang::String getLastCommitSegmentsFileName(const ::org::apache::lucene::store::Directory &);
          jlong getLastGeneration() const;
          ::org::apache::lucene::util::Version getMinSegmentLuceneVersion() const;
          ::java::lang::String getSegmentsFileName() const;
          ::java::util::Map getUserData() const;
          jlong getVersion() const;
          ::org::apache::lucene::index::SegmentCommitInfo info(jint) const;
          ::java::util::Iterator iterator() const;
          static SegmentInfos readCommit(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &);
          static SegmentInfos readCommit(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::ChecksumIndexInput &, jlong);
          static SegmentInfos readLatestCommit(const ::org::apache::lucene::store::Directory &);
          jboolean remove(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          static void setInfoStream(const ::java::io::PrintStream &);
          void setNextWriteGeneration(jlong) const;
          void setUserData(const ::java::util::Map &, jboolean) const;
          jint size() const;
          ::java::lang::String toString() const;
          jint totalMaxDoc() const;
          void updateGeneration(const SegmentInfos &) const;
          void write(const ::org::apache::lucene::store::IndexOutput &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(SegmentInfos);
        extern PyTypeObject *PY_TYPE(SegmentInfos);

        class t_SegmentInfos {
        public:
          PyObject_HEAD
          SegmentInfos object;
          static PyObject *wrap_Object(const SegmentInfos&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
