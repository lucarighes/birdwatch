#ifndef org_apache_lucene_index_SegmentInfo_H
#define org_apache_lucene_index_SegmentInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace store {
        class Directory;
      }
      namespace search {
        class Sort;
      }
      namespace codecs {
        class Codec;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SegmentInfo : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a9de460ab2a0d060,
            mid_addFile_9fd2eb66a64e6f0f,
            mid_addFiles_50bc3ddc62a19f2d,
            mid_equals_8b72f2dcdde6fd1d,
            mid_files_7dcf4034c6d1a92a,
            mid_getAttribute_9bfa75c9f141b67f,
            mid_getAttributes_1c3426541413a55d,
            mid_getCodec_a302ebac25c26553,
            mid_getDiagnostics_1c3426541413a55d,
            mid_getId_cf386cdb1bbd339f,
            mid_getIndexSort_f58d0196b42aaee4,
            mid_getMinVersion_6b68647131bbda98,
            mid_getUseCompoundFile_8454bd5aa23fd11e,
            mid_getVersion_6b68647131bbda98,
            mid_hashCode_9972fcc56b44e79d,
            mid_maxDoc_9972fcc56b44e79d,
            mid_putAttribute_04b762e0ad33dcc5,
            mid_setCodec_945acc7dbd39be07,
            mid_setFiles_50bc3ddc62a19f2d,
            mid_toString_db9b55ba01e03e4b,
            mid_toString_d7593acad64ef635,
            max_mid
          };

          enum {
            fid_dir,
            fid_name,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentInfo(const SegmentInfo& obj) : ::java::lang::Object(obj) {}

          static jint NO;
          static jint YES;

          ::org::apache::lucene::store::Directory _get_dir() const;
          ::java::lang::String _get_name() const;

          SegmentInfo(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::util::Version &, const ::java::lang::String &, jint, jboolean, const ::org::apache::lucene::codecs::Codec &, const ::java::util::Map &, const JArray< jbyte > &, const ::java::util::Map &, const ::org::apache::lucene::search::Sort &);

          void addFile(const ::java::lang::String &) const;
          void addFiles(const ::java::util::Collection &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::Set files() const;
          ::java::lang::String getAttribute(const ::java::lang::String &) const;
          ::java::util::Map getAttributes() const;
          ::org::apache::lucene::codecs::Codec getCodec() const;
          ::java::util::Map getDiagnostics() const;
          JArray< jbyte > getId() const;
          ::org::apache::lucene::search::Sort getIndexSort() const;
          ::org::apache::lucene::util::Version getMinVersion() const;
          jboolean getUseCompoundFile() const;
          ::org::apache::lucene::util::Version getVersion() const;
          jint hashCode() const;
          jint maxDoc() const;
          ::java::lang::String putAttribute(const ::java::lang::String &, const ::java::lang::String &) const;
          void setCodec(const ::org::apache::lucene::codecs::Codec &) const;
          void setFiles(const ::java::util::Collection &) const;
          ::java::lang::String toString() const;
          ::java::lang::String toString(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(SegmentInfo);
        extern PyTypeObject *PY_TYPE(SegmentInfo);

        class t_SegmentInfo {
        public:
          PyObject_HEAD
          SegmentInfo object;
          static PyObject *wrap_Object(const SegmentInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
