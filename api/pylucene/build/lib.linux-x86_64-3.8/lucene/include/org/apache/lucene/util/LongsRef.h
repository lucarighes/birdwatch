#ifndef org_apache_lucene_util_LongsRef_H
#define org_apache_lucene_util_LongsRef_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Comparable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class LongsRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class LongsRef : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_040c4cd0390c5aff,
            mid_init$_d07f51188c558bf8,
            mid_clone_96fcaaa82db94ed8,
            mid_compareTo_69f82e2c8b244744,
            mid_deepCopyOf_78371c48d7515f42,
            mid_equals_8b72f2dcdde6fd1d,
            mid_hashCode_9972fcc56b44e79d,
            mid_isValid_8454bd5aa23fd11e,
            mid_longsEquals_66825b1458f8adfe,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          enum {
            fid_length,
            fid_longs,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongsRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongsRef(const LongsRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jlong > *EMPTY_LONGS;

          jint _get_length() const;
          void _set_length(jint) const;
          JArray< jlong > _get_longs() const;
          void _set_longs(const JArray< jlong > &) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          LongsRef();
          LongsRef(jint);
          LongsRef(const JArray< jlong > &, jint, jint);

          LongsRef clone() const;
          jint compareTo(const LongsRef &) const;
          static LongsRef deepCopyOf(const LongsRef &);
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean isValid() const;
          jboolean longsEquals(const LongsRef &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(LongsRef);
        extern PyTypeObject *PY_TYPE(LongsRef);

        class t_LongsRef {
        public:
          PyObject_HEAD
          LongsRef object;
          static PyObject *wrap_Object(const LongsRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
